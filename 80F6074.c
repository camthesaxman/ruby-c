int __fastcall sub_80F6074(__int16 a1)
{
  signed __int16 v1; // r2@1
  signed __int16 v2; // r2@5
  signed __int16 v3; // r2@9
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1 + v2008770;
  v2008770 = v1;
  if ( v1 > v2008774 )
    v2008770 = v1 - 1 - v2008774;
  if ( v2008770 < 0 )
    v2008770 += 1 + v2008774;
  v2 = a1 + v2008772;
  v2008772 = v2;
  if ( v2 > v2008774 )
    v2008772 = v2 - 1 - v2008774;
  if ( v2008772 < 0 )
    v2008772 += 1 + v2008774;
  v3 = a1 + v200876E;
  v200876E = v3;
  if ( v3 > v2008774 )
    v200876E = v3 - 1 - v2008774;
  if ( v200876E < 0 )
    v200876E += 1 + v2008774;
  return v5;
}
