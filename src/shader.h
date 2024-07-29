#ifndef SHADER_H
#define SHADER_H
#include <string>

#include "shader_source.h"

class Shader
{
public:
	explicit Shader(const std::string& filepath);

private:
	
	static unsigned int CreateShader(const std::string& vertex_shader, const std::string& fragment_shader);
	static unsigned int CompileShader(unsigned int type, const std::string& source);
	static ShaderSource ParseShader(const std::string& filepath);
};

#endif // SHADER_H
