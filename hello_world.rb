puts "How old are you?"
age = gets.chomp.to_i
if age == 0
	puts "nope"
	exit
end
puts "You are #{age} years old"
if age < 30
	puts "you're still a baby!"
end
if age > 30
	puts "golly, you're a fossil!"
end