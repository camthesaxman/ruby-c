int sub_80C37E4()
{
  signed int v0; // r4@1
  void *v1; // r3@2
  signed __int16 v2; // r2@2
  int v3; // r4@12
  signed __int16 v4; // r6@13
  void *v5; // r3@13
  signed int v6; // r1@15
  _WORD *v7; // r2@23
  signed int v8; // r3@23
  int v10; // [sp+0h] [bp-20h]@2
  int v11; // [sp+0h] [bp-20h]@13
  int v12; // [sp+4h] [bp-1Ch]@2
  int v13; // [sp+4h] [bp-1Ch]@13
  int v14; // [sp+8h] [bp-18h]@4
  int v15; // [sp+8h] [bp-18h]@13
  unsigned __int16 v16; // [sp+Ch] [bp-14h]@4
  unsigned __int16 v17; // [sp+Ch] [bp-14h]@13
  int v18; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  if ( v203869A & 1 )
  {
    v1 = &gUnknown_08E964B8;
    v10 = 9;
    v2 = 2;
    v12 = 2;
_080C386A:
    v14 = 8;
    v16 = v2;
    goto _080C3870;
  }
  v2 = v203869E;
  if ( !v203869E )
  {
    v0 = 1;
    v1 = &gUnknown_08E964B8;
    v10 = v203869E;
    v12 = v203869E;
    v14 = 9;
    v16 = 2;
_080C3870:
    sub_809D104(100720640, 5, 1u, (int)v1, v10, v12, v14, v16);
    goto _080C389E;
  }
  if ( v203869E == 1 )
  {
    v1 = &gUnknown_08E964B8;
    v10 = 9;
    v12 = 0;
    v14 = 8;
    v16 = 2;
    goto _080C3870;
  }
  if ( v203869E == 2 )
  {
    v1 = &gUnknown_08E964B8;
    v10 = 17;
    v12 = 0;
    goto _080C386A;
  }
  v0 = 1;
  sub_809D104(100720640, 5, 1u, (int)&gUnknown_08E964B8, v203869A & 1, 2, 9, 2u);
_080C389E:
  v3 = v0 + 13;
  if ( v203869C )
  {
    if ( v203869C == 1 )
    {
      v4 = 1;
      v5 = &gUnknown_08E964B8;
      v11 = 0;
      v13 = 4;
      v6 = 11;
    }
    else
    {
      if ( v203869C == 2 )
      {
        v4 = 2;
        v5 = &gUnknown_08E964B8;
        v11 = 11;
        v13 = 4;
        v15 = 10;
        v17 = 2;
        goto _080C392A;
      }
      if ( v203869C != 3 )
      {
        v4 = 4;
        sub_809D104(100720640, v3, 1u, (int)&gUnknown_08E964B8, 0, 6, 10, 2u);
        goto _080C395A;
      }
      v4 = 3;
      v5 = &gUnknown_08E964B8;
      v11 = 21;
      v13 = 4;
      v6 = 10;
    }
    v15 = v6;
    v17 = 2;
    goto _080C392A;
  }
  v4 = 0;
  v5 = &gUnknown_08E964B8;
  v11 = 17;
  v13 = 2;
  v15 = 10;
  v17 = 2;
_080C392A:
  sub_809D104(100720640, v3, 1u, (int)v5, v11, v13, v15, v17);
_080C395A:
  v7 = (_WORD *)100720640;
  v8 = 127;
  do
  {
    *v7 &= 0xFFFu;
    *v7 |= v4 << 12;
    ++v7;
    --v8;
  }
  while ( v8 >= 0 );
  return v18;
}
