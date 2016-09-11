signed int __fastcall sub_80BFF68(int *a1, int *a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  signed int v7; // r0@1
  unsigned __int8 v8; // r0@7
  signed int result; // r0@12

  v3 = a3;
  v4 = *a1;
  v5 = *a2;
  v6 = 0;
  v7 = (unsigned __int8)sub_80BFB54(*(_BYTE *)(36 * byte_3000722 + *a2));
  if ( v7 == 3 )
  {
    v8 = sub_80C00B4(v4 + 36 * byte_3005D38, v5 + 36 * byte_3000722, v3);
    goto _080C0022;
  }
  if ( v7 <= 3 )
  {
    if ( v7 != 2 )
      goto _080C0026;
    v8 = sub_80C004C(v4 + 36 * byte_3005D38, v5 + 36 * byte_3000722, v3);
_080C0022:
    v6 = v8;
    goto _080C0026;
  }
  if ( v7 == 4 )
  {
    v8 = sub_80C0134(v4 + 36 * byte_3005D38, v5 + 36 * byte_3000722, v3);
    goto _080C0022;
  }
_080C0026:
  if ( v6 == 1 )
  {
    sub_80BF55C(v5, byte_3000722);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
