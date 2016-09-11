int __fastcall sub_80945C0(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  unsigned int v5; // r5@2
  int v6; // r1@2
  unsigned int v7; // r4@2
  int v8; // r0@3
  unsigned int v9; // r5@3
  int v10; // r1@3
  unsigned int v11; // r4@3
  int v13; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  sub_809473C();
  if ( FlagGet(0x801u) << 24 )
  {
    MenuDrawTextWindow(v2, v3);
    v4 = (v2 << 16) + 0x10000;
    v5 = (unsigned int)v4 >> 16;
    v6 = (v3 << 16) + 0x10000;
    v7 = (unsigned int)v6 >> 16;
    sub_8094778(v4 >> 16, v6 >> 16);
    sub_8094740((signed __int16)v5, (signed int)((v7 << 16) + 0x20000) >> 16);
    sub_80947B0((signed __int16)v5, (signed __int16)(v7 + 4));
    sub_80947F8((signed __int16)v5, (signed __int16)(v7 + 6));
    sub_8094844((signed __int16)v5, (signed __int16)(v7 + 8));
  }
  else
  {
    MenuDrawTextWindow(v2, v3);
    v8 = (v2 << 16) + 0x10000;
    v9 = (unsigned int)v8 >> 16;
    v10 = (v3 << 16) + 0x10000;
    v11 = (unsigned int)v10 >> 16;
    sub_8094778(v8 >> 16, v10 >> 16);
    sub_8094740((signed __int16)v9, (signed int)((v11 << 16) + 0x20000) >> 16);
    sub_80947B0((signed __int16)v9, (signed __int16)(v11 + 4));
    sub_8094844((signed __int16)v9, (signed __int16)(v11 + 6));
  }
  return v13;
}
