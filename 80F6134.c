int sub_80F6134()
{
  int v0; // r1@5
  _WORD *v1; // r0@5
  int v3; // [sp+Ch] [bp-4h]@0

  if ( !v20087C9 )
  {
    v200876C = v20087DC;
    LOWORD(v0) = v20087DC;
    v1 = (_WORD *)33589102;
    goto _080F61F2;
  }
  if ( v20087DC >= v2008774 - 7 )
  {
    v2008770 = v2008774 - 7;
    v2008772 = v2008774;
    v200876E = v20087DC;
    v0 = 7 - (v2008774 - v20087DC);
    v1 = (_WORD *)33589100;
_080F61F2:
    *v1 = v0;
    return v3;
  }
  v200876C = 0;
  v2008770 = v20087DC;
  v200876E = v20087DC;
  v2008772 = v20087DC + 7;
  if ( (signed __int16)(v20087DC + 7) > v2008774 )
    v2008772 = v20087DC + 6 - v2008774;
  return v3;
}
