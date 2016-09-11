int __fastcall sub_80F8D7C(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1

  v2 = a1;
  StringCopy(a1, a2);
  sub_814A568(v2);
  return (int)&v2[(unsigned __int16)StringLength(v2)];
}
