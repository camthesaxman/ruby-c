int __fastcall sub_8106F6C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  signed __int16 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  dword_3005E24 = dword_3005E10;
  dword_3005E28 = dword_3005E90;
  byte_3005E38 = 0;
  byte_3005E3F = *(_BYTE *)dword_3005E8C;
  byte_3005E39 = 0;
  byte_3005E3A = 0;
  byte_3005E3B = 64;
  byte_3005E3C = 64;
  byte_3005E3D = 64;
  byte_3005E3E = 64;
  if ( (unsigned int)a1 - 2 > 0x22 )
  {
def_8106FAA:
    v2 = 1;
  }
  else
  {
    switch ( a1 )
    {
      case 4u:
      case 0x22u:
        v2 = 3;
        break;
      default:
        goto def_8106FAA;
    }
  }
  unk_3005E34 = v2;
  unk_3005E36 = 2;
  unk_3005E20 = v1;
  unk_3005E30 = 100728832;
  sub_80FC7A0((int)&unk_3005E20);
  sub_80FDA18((int)&unk_3005E20);
  sub_80FD8CC((int)&unk_3005E20);
  LoadPalette(dword_3005E90, 256, 512);
  return v4;
}
