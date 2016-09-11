unsigned int sub_810FC18()
{
  unsigned int v0; // r8@1
  unsigned int result; // r0@2
  unsigned int v2; // r5@4
  _WORD *v3; // r2@4
  char v4; // r6@5
  char v5; // r0@6
  char v6; // r2@8
  _WORD *v7; // [sp+0h] [bp-1Ch]@6

  v0 = 0;
  if ( (sub_810FCB0() & 0xFFFF) == 1 )
  {
    result = 0;
  }
  else
  {
    v2 = 0;
    v3 = (_WORD *)33712886;
    do
    {
      v4 = gUnknown_083F8410[v2];
      if ( ((signed int)*v3 >> v4) & 1 )
      {
        v0 = v2;
        v7 = v3;
        v5 = Random();
        v3 = v7;
        if ( v5 & 1 )
        {
          *v7 ^= 1 << v4;
          goto _0810FC92;
        }
      }
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 7 );
    v6 = gUnknown_083F8410[v0];
    if ( ((signed int)v2026AF6 >> v6) & 1 )
      v2026AF6 ^= 1 << v6;
_0810FC92:
    result = v0;
  }
  return result;
}
