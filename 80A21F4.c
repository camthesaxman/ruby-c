signed int __fastcall sub_80A21F4(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r5@1
  int v5; // r7@1
  unsigned int v6; // r1@1
  unsigned int v7; // r6@1
  unsigned int v8; // r8@1
  int v9; // r4@1
  int v10; // r0@3
  int v11; // r1@3
  unsigned int v12; // r2@3
  int v13; // r4@4

  v3 = a3;
  v4 = a1;
  v5 = a1;
  v6 = a2 << 24;
  v7 = v6 >> 24;
  v8 = v6 >> 24;
  v9 = (unsigned __int8)sub_80A2260(a1, v6 >> 24);
  if ( v9 == 16 )
  {
    v13 = (unsigned __int8)sub_80A2260(v5, 255);
    if ( v13 != 16 )
    {
      v10 = v5;
      v11 = v13;
      v12 = v8;
      goto _080A2246;
    }
  }
  else if ( sub_80A2370(v4) << 24 )
  {
    v10 = v4;
    v11 = v9;
    v12 = v7;
_080A2246:
    sub_80A23C8(v10, v11, v12, v3);
    return 0;
  }
  return 1;
}
