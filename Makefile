default:
	echo "No default target"

.PHONY: crosscompile
crosscompile:
	docker buildx build crosscompile --progress plain -t itrooz/crosscompile --build-arg "JOBS=$(JOBS)"

.PHONY: imhex
imhex:
	docker buildx build imhex        --progress plain -t itrooz/imhex        --build-arg 'JOBS=$(JOBS)' --build-arg 'CUSTOM_GLFW=1' --output .        

.PHONY: clean
clean:
	rm imhex.dmg
