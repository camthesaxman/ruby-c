int __fastcall sub_8136E40(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r2@2
  unsigned int v6; // r4@2
  int v7; // r6@3
  int v8; // r0@3
  unsigned int v9; // r0@3
  unsigned int v10; // r1@3
  __int16 v11; // r1@8
  char v13; // [sp+0h] [bp-1Ch]@3
  int v14; // [sp+18h] [bp-4h]@11

  v3 = a1;
  v4 = a2;
  if ( GetMonData(a2, 48, a3) != 255 )
  {
    sub_8136F74(v3, v4);
    v6 = 0;
    do
    {
      v7 = gUnknown_08406118[v6];
      v8 = (unsigned __int8)GetMonData(v4, gUnknown_08406118[v6], v5);
      v13 = v8;
      v9 = (v8 + *(_WORD *)(v2039304 + 102 + 2 * v6)) << 16;
      v10 = v9 >> 16;
      if ( (v9 & 0x80000000) != 0 )
        LOWORD(v10) = 0;
      if ( (signed __int16)v10 > 255 )
        LOBYTE(v10) = -1;
      v13 = v10;
      SetMonData(v4, v7, (int)&v13);
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v6 <= 4 );
    v11 = (unsigned __int8)GetMonData(v4, 48, v5) + *(_BYTE *)(v3 + 6);
    if ( v11 > 255 )
      LOBYTE(v11) = -1;
    v13 = v11;
    SetMonData(v4, 48, (int)&v13);
  }
  return v14;
}
