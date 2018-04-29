#ifndef _WAVE_H_
#define _WAVE_H_
#include "sys.h"

//12比特正玄波
uint16_t sin_wave[256]={
0x0800,0x0832,0x0864,0x0896,0x08C8,0x08FA,0x092C,0x095E,0x098F,0x09C0,0x09F1,0x0A22,0x0A52,0x0A82,0x0AB1,0x0AE0,
0x0B0F,0x0B3D,0x0B6B,0x0B98,0x0BC5,0x0BF1,0x0C1C,0x0C47,0x0C71,0x0C9A,0x0CC3,0x0CEB,0x0D12,0x0D39,0x0D5F,0x0D83,
0x0DA7,0x0DCA,0x0DED,0x0E0E,0x0E2E,0x0E4E,0x0E6C,0x0E8A,0x0EA6,0x0EC1,0x0EDC,0x0EF5,0x0F0D,0x0F24,0x0F3A,0x0F4F,
0x0F63,0x0F76,0x0F87,0x0F98,0x0FA7,0x0FB5,0x0FC2,0x0FCD,0x0FD8,0x0FE1,0x0FE9,0x0FF0,0x0FF5,0x0FF9,0x0FFD,0x0FFE,
0x0FFF,0x0FFE,0x0FFD,0x0FF9,0x0FF5,0x0FF0,0x0FE9,0x0FE1,0x0FD8,0x0FCD,0x0FC2,0x0FB5,0x0FA7,0x0F98,0x0F87,0x0F76,
0x0F63,0x0F4F,0x0F3A,0x0F24,0x0F0D,0x0EF5,0x0EDC,0x0EC1,0x0EA6,0x0E8A,0x0E6C,0x0E4E,0x0E2E,0x0E0E,0x0DED,0x0DCA,
0x0DA7,0x0D83,0x0D5F,0x0D39,0x0D12,0x0CEB,0x0CC3,0x0C9A,0x0C71,0x0C47,0x0C1C,0x0BF1,0x0BC5,0x0B98,0x0B6B,0x0B3D,
0x0B0F,0x0AE0,0x0AB1,0x0A82,0x0A52,0x0A22,0x09F1,0x09C0,0x098F,0x095E,0x092C,0x08FA,0x08C8,0x0896,0x0864,0x0832,
0x07FF,0x07CD,0x079B,0x0769,0x0737,0x0705,0x06D3,0x06A1,0x0670,0x063F,0x060E,0x05DD,0x05AD,0x057D,0x054E,0x051F,
0x04F0,0x04C2,0x0494,0x0467,0x043A,0x040E,0x03E3,0x03B8,0x038E,0x0365,0x033C,0x0314,0x02ED,0x02C6,0x02A0,0x027C,
0x0258,0x0235,0x0212,0x01F1,0x01D1,0x01B1,0x0193,0x0175,0x0159,0x013E,0x0123,0x010A,0x00F2,0x00DB,0x00C5,0x00B0,
0x009C,0x0089,0x0078,0x0067,0x0058,0x004A,0x003D,0x0032,0x0027,0x001E,0x0016,0x000F,0x000A,0x0006,0x0002,0x0001,
0x0000,0x0001,0x0002,0x0006,0x000A,0x000F,0x0016,0x001E,0x0027,0x0032,0x003D,0x004A,0x0058,0x0067,0x0078,0x0089,
0x009C,0x00B0,0x00C5,0x00DB,0x00F2,0x010A,0x0123,0x013E,0x0159,0x0175,0x0193,0x01B1,0x01D1,0x01F1,0x0212,0x0235,
0x0258,0x027C,0x02A0,0x02C6,0x02ED,0x0314,0x033C,0x0365,0x038E,0x03B8,0x03E3,0x040E,0x043A,0x0467,0x0494,0x04C2,
0x04F0,0x051F,0x054E,0x057D,0x05AD,0x05DD,0x060E,0x063F,0x0670,0x06A1,0x06D3,0x0705,0x0737,0x0769,0x079B,0x07CD};


//12比特三角波
uint16_t triangle_wave[256]={
0x0000,0x0020,0x0040,0x0060,0x0080,0x00A0,0x00C0,0x00E0,0x0100,0x0120,0x0140,0x0160,0x0180,0x01A0,0x01C0,0x01E0,
0x0200,0x0220,0x0240,0x0260,0x0280,0x02A0,0x02C0,0x02E0,0x0300,0x0320,0x0340,0x0360,0x0380,0x03A0,0x03C0,0x03E0,
0x0400,0x0420,0x0440,0x0460,0x0480,0x04A0,0x04C0,0x04E0,0x0500,0x0520,0x0540,0x0560,0x0580,0x05A0,0x05C0,0x05E0,
0x0600,0x0620,0x0640,0x0660,0x0680,0x06A0,0x06C0,0x06E0,0x0700,0x0720,0x0740,0x0760,0x0780,0x07A0,0x07C0,0x07E0,
0x0800,0x081F,0x083F,0x085F,0x087F,0x089F,0x08BF,0x08DF,0x08FF,0x091F,0x093F,0x095F,0x097F,0x099F,0x09BF,0x09DF,
0x09FF,0x0A1F,0x0A3F,0x0A5F,0x0A7F,0x0A9F,0x0ABF,0x0ADF,0x0AFF,0x0B1F,0x0B3F,0x0B5F,0x0B7F,0x0B9F,0x0BBF,0x0BDF,
0x0BFF,0x0C1F,0x0C3F,0x0C5F,0x0C7F,0x0C9F,0x0CBF,0x0CDF,0x0CFF,0x0D1F,0x0D3F,0x0D5F,0x0D7F,0x0D9F,0x0DBF,0x0DDF,
0x0DFF,0x0E1F,0x0E3F,0x0E5F,0x0E7F,0x0E9F,0x0EBF,0x0EDF,0x0EFF,0x0F1F,0x0F3F,0x0F5F,0x0F7F,0x0F9F,0x0FBF,0x0FDF,
0x0FFF,0x0FDF,0x0FBF,0x0F9F,0x0F7F,0x0F5F,0x0F3F,0x0F1F,0x0EFF,0x0EDF,0x0EBF,0x0E9F,0x0E7F,0x0E5F,0x0E3F,0x0E1F,
0x0DFF,0x0DDF,0x0DBF,0x0D9F,0x0D7F,0x0D5F,0x0D3F,0x0D1F,0x0CFF,0x0CDF,0x0CBF,0x0C9F,0x0C7F,0x0C5F,0x0C3F,0x0C1F,
0x0BFF,0x0BDF,0x0BBF,0x0B9F,0x0B7F,0x0B5F,0x0B3F,0x0B1F,0x0AFF,0x0ADF,0x0ABF,0x0A9F,0x0A7F,0x0A5F,0x0A3F,0x0A1F,
0x09FF,0x09DF,0x09BF,0x099F,0x097F,0x095F,0x093F,0x091F,0x08FF,0x08DF,0x08BF,0x089F,0x087F,0x085F,0x083F,0x081F,
0x0800,0x07E0,0x07C0,0x07A0,0x0780,0x0760,0x0740,0x0720,0x0700,0x06E0,0x06C0,0x06A0,0x0680,0x0660,0x0640,0x0620,
0x0600,0x05E0,0x05C0,0x05A0,0x0580,0x0560,0x0540,0x0520,0x0500,0x04E0,0x04C0,0x04A0,0x0480,0x0460,0x0440,0x0420,
0x0400,0x03E0,0x03C0,0x03A0,0x0380,0x0360,0x0340,0x0320,0x0300,0x02E0,0x02C0,0x02A0,0x0280,0x0260,0x0240,0x0220,
0x0200,0x01E0,0x01C0,0x01A0,0x0180,0x0160,0x0140,0x0120,0x0100,0x00E0,0x00C0,0x00A0,0x0080,0x0060,0x0040,0x0020,};




uint16_t sawtooth_wave[256]={
0x0000,0x0010,0x0020,0x0030,0x0040,0x0050,0x0060,0x0070,0x0080,0x0090,0x00A0,0x00B0,0x00C0,0x00D0,0x00E0,0x00F0,
0x0100,0x0110,0x0120,0x0130,0x0140,0x0150,0x0160,0x0170,0x0180,0x0190,0x01A0,0x01B0,0x01C0,0x01D0,0x01E0,0x01F0,
0x0200,0x0210,0x0220,0x0230,0x0240,0x0250,0x0260,0x0270,0x0280,0x0290,0x02A0,0x02B0,0x02C0,0x02D0,0x02E0,0x02F0,
0x0300,0x0310,0x0320,0x0330,0x0340,0x0350,0x0360,0x0370,0x0380,0x0390,0x03A0,0x03B0,0x03C0,0x03D0,0x03E0,0x03F0,
0x0400,0x0410,0x0420,0x0430,0x0440,0x0450,0x0460,0x0470,0x0480,0x0490,0x04A0,0x04B0,0x04C0,0x04D0,0x04E0,0x04F0,
0x0500,0x0510,0x0520,0x0530,0x0540,0x0550,0x0560,0x0570,0x0580,0x0590,0x05A0,0x05B0,0x05C0,0x05D0,0x05E0,0x05F0,
0x0600,0x0610,0x0620,0x0630,0x0640,0x0650,0x0660,0x0670,0x0680,0x0690,0x06A0,0x06B0,0x06C0,0x06D0,0x06E0,0x06F0,
0x0700,0x0710,0x0720,0x0730,0x0740,0x0750,0x0760,0x0770,0x0780,0x0790,0x07A0,0x07B0,0x07C0,0x07D0,0x07E0,0x07F0,
0x0800,0x080F,0x081F,0x082F,0x083F,0x084F,0x085F,0x086F,0x087F,0x088F,0x089F,0x08AF,0x08BF,0x08CF,0x08DF,0x08EF,
0x08FF,0x090F,0x091F,0x092F,0x093F,0x094F,0x095F,0x096F,0x097F,0x098F,0x099F,0x09AF,0x09BF,0x09CF,0x09DF,0x09EF,
0x09FF,0x0A0F,0x0A1F,0x0A2F,0x0A3F,0x0A4F,0x0A5F,0x0A6F,0x0A7F,0x0A8F,0x0A9F,0x0AAF,0x0ABF,0x0ACF,0x0ADF,0x0AEF,
0x0AFF,0x0B0F,0x0B1F,0x0B2F,0x0B3F,0x0B4F,0x0B5F,0x0B6F,0x0B7F,0x0B8F,0x0B9F,0x0BAF,0x0BBF,0x0BCF,0x0BDF,0x0BEF,
0x0BFF,0x0C0F,0x0C1F,0x0C2F,0x0C3F,0x0C4F,0x0C5F,0x0C6F,0x0C7F,0x0C8F,0x0C9F,0x0CAF,0x0CBF,0x0CCF,0x0CDF,0x0CEF,
0x0CFF,0x0D0F,0x0D1F,0x0D2F,0x0D3F,0x0D4F,0x0D5F,0x0D6F,0x0D7F,0x0D8F,0x0D9F,0x0DAF,0x0DBF,0x0DCF,0x0DDF,0x0DEF,
0x0DFF,0x0E0F,0x0E1F,0x0E2F,0x0E3F,0x0E4F,0x0E5F,0x0E6F,0x0E7F,0x0E8F,0x0E9F,0x0EAF,0x0EBF,0x0ECF,0x0EDF,0x0EEF,
0x0EFF,0x0F0F,0x0F1F,0x0F2F,0x0F3F,0x0F4F,0x0F5F,0x0F6F,0x0F7F,0x0F8F,0x0F9F,0x0FAF,0x0FBF,0x0FCF,0x0FDF,0x0FEF,};




uint16_t rectangular_wave[256]={
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,
0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,0x0FFF,};



#endif
