int __fastcall sub_80BFD44(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r8@1
  int v4; // r7@1
  signed int v5; // r6@1
  unsigned int v6; // r4@1
  signed int v7; // r1@11
  signed int v8; // r2@11
  int v9; // r0@15
  int v10; // r0@15
  int v11; // r0@15
  int v13; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    memcpy(900 * v6 + 33583104, (const char *)(v6 * v4 + v3), 900);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  if ( v5 == 1 )
  {
    v7 = 33717868;
    v8 = 33584904;
_080BFDD4:
    sub_80BFE24(33583104, v7, v8, 33585804);
    goto _080BFDFC;
  }
  if ( v5 <= 1 )
  {
    if ( !v5 )
      sub_80BFE24(33717868, 33584004, 33584904, 33585804);
    goto _080BFDFC;
  }
  if ( v5 == 2 )
  {
    v7 = 33584004;
    v8 = 33717868;
    goto _080BFDD4;
  }
  if ( v5 == 3 )
    sub_80BFE24(33583104, 33584004, 33584904, 33717868);
_080BFDFC:
  v9 = sub_80BF588(33717868);
  sub_80C04A0(v9);
  v10 = sub_80BF588(33717868);
  v11 = sub_80C01D4(v10);
  sub_80C0408(v11);
  return v13;
}
