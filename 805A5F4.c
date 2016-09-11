int __fastcall fish7(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r1@1
  signed __int16 v4; // r0@2
  int v6; // [sp+0h] [bp-10h]@1

  v1 = a1;
  v2 = memcpy(&v6, &gUnknown_0830FD02, 6);
  sub_805A954(v2);
  v3 = *(_WORD *)(v1 + 10) + 1;
  *(_WORD *)(v1 + 10) = v3;
  if ( v3 >= (signed int)*((_WORD *)&v6 + *(_WORD *)(v1 + 38)) )
  {
    v4 = 12;
_0805A63C:
    *(_WORD *)(v1 + 8) = v4;
    return 0;
  }
  if ( word_300179E & 1 )
  {
    v4 = *(_WORD *)(v1 + 8) + 1;
    goto _0805A63C;
  }
  return 0;
}
