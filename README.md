# CoronaAd-OpenGL

## OpenGL

OpenGL is a cross-language, cross-platform application
programming interface (API) for rendering 2D and 3D vector
graphics. We are going to use modern OpenGL, which
means OpenGLv3.0+. OpenGL is low level API we have to
implement abstraction by using classes so that we can avoid
repeating code and code readability will be improved,
OpenGL works like a state machine in the sense that
output of any function call depends on the previously set
state instead of the just the arguments passed to the function,
which means to draw anything in OpenGL we have to follow
the pipeline, which is 1) put the data required in a
buffer(called a vertex buffer) so that OpenGL can use it to
draw later when we issue a draw call, 2) and create a array
(called a vertex array) which will give meaning to the buffer
of data 3) then we use a shader ( piece of code write in a
shader language, in our case GLSL which runs on the GPU)
that can understand the vertex array to fetch the data and
draw it. This is a simplified version of the pipeline for a
simple scene this is sufficient.
