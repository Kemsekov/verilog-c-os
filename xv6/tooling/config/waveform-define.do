onerror {resume}
quietly WaveActivateNextPane {} 0
wave radix hex
add wave -noupdate /cpu_tb/w_test_pass
add wave -noupdate /cpu_tb/w_PC
add wave -noupdate /cpu_tb/w_IR
add wave -noupdate /cpu_tb/cpu/w_instruction
wave -radix hex /cpu_tb/w_PC
wave -radix hex /cpu_tb/w_IR
wave -radix decimal /cpu_tb/cpu/w_instruction
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
quietly wave cursor active 0
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {20000 ps}
