int __fastcall sub_80C0514(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r8@1
  int v4; // r7@1
  signed int v5; // r5@1
  unsigned int v6; // r4@1
  signed int v7; // r1@11
  signed int v8; // r2@11
  int v9; // r0@15
  int v11; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    memcpy((v6 << 6) + 33583104, (const char *)(v6 * v4 + v3), 64);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  if ( v5 == 1 )
  {
    v7 = 33718768;
    v8 = 33583232;
_080C058A:
    sub_80C05C4(33583104, v7, v8, 33583296);
    goto _080C05AC;
  }
  if ( v5 <= 1 )
  {
    if ( !v5 )
      sub_80C05C4(33718768, 33583168, 33583232, 33583296);
    goto _080C05AC;
  }
  if ( v5 == 2 )
  {
    v7 = 33583168;
    v8 = 33718768;
    goto _080C058A;
  }
  if ( v5 == 3 )
    sub_80C05C4(33583104, 33583168, 33583232, 33718768);
_080C05AC:
  v9 = sub_80C0750();
  sub_80C0788(v9);
  return v11;
}
