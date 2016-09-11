int __fastcall sub_80B72A4(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  char v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a1 << 24;
  a2 = (unsigned __int8)a2;
  v3 = v2 >> 24;
  if ( (v2 - 100663296) >> 24 <= 4 )
  {
    v4 = v3 + 49;
_080B735A:
    LOBYTE(v3) = v4;
    goto _080B735E;
  }
  if ( ((v3 - 11) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B735A;
  }
  if ( ((v3 - 16) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B735A;
  }
  if ( ((v3 - 26) & 0xFF) <= 4 )
  {
    v4 = v3 + 44;
    goto _080B735A;
  }
  if ( ((v3 - 75) & 0xFF) <= 4 )
    goto LABEL_24;
  if ( ((v3 - 86) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B735A;
  }
  if ( ((v3 - 91) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B735A;
  }
  if ( ((v3 - 96) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B735A;
  }
  if ( ((v3 - 106) & 0xFF) <= 4 )
  {
    v4 = v3 + 44;
    goto _080B735A;
  }
  if ( ((v3 + 101) & 0xFF) <= 4 )
  {
LABEL_24:
    v4 = v3 - 5;
    goto _080B735A;
  }
_080B735E:
  *(_BYTE *)(a2 + 33554449) = v3;
  return v6;
}
