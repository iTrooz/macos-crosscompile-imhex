default:
	echo "No default target"

.PHONY: crosscompile_img
crosscompile:
	docker buildx build crosscompile --progress plain -t crosscompile --build-arg "JOBS=$(JOBS)"

.PHONY: imhex_img
imhex_img:
	docker buildx build imhex        --progress plain -t imhex        --build-arg 'JOBS=$(JOBS)' --build-arg 'BUILD_TYPE=$(BUILD_TYPE)' --build-arg 'CUSTOM_GLFW=1' --target=build

.PHONY: imhex_bin
imhex_bin:
	docker buildx build imhex        --progress plain                 --build-arg 'JOBS=$(JOBS)' --build-arg 'BUILD_TYPE=$(BUILD_TYPE)' --build-arg 'CUSTOM_GLFW=1' --output .        

.PHONY: clean
clean:
	rm imhex.dmg
