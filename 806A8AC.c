signed int __fastcall sub_806A8AC(_WORD *a1, signed int a2, signed int a3, char a4)
{
  _WORD *v4; // r4@1
  __int16 v5; // r0@2
  __int16 v6; // r0@4

  v4 = a1;
  if ( a4 & 0x80 )
  {
    v5 = *a1 - 1;
    goto _0806A8E0;
  }
  if ( a4 & 0x40 )
  {
    v6 = *a1 + 1;
_0806A8FE:
    *v4 = v6;
    if ( *v4 > a3 )
      *v4 = a2;
    return 1;
  }
  if ( !(a4 & 0x20) )
  {
    if ( !(a4 & 0x10) )
      return 0;
    v6 = *a1 + 10;
    goto _0806A8FE;
  }
  v5 = *a1 - 10;
_0806A8E0:
  *v4 = v5;
  if ( *v4 < a2 )
    *v4 = a3;
  return 1;
}
