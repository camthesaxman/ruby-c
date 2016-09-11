int __fastcall sub_80F708C(char a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  v200876E += a1;
  if ( v200876E & 0x8000 )
    v200876E = v2008774;
  if ( v200876E > v2008774 )
    v200876E = 0;
  v200BC94 = a1;
  v20087DC = v200876E;
  v20087DE = 0;
  return v2;
}
