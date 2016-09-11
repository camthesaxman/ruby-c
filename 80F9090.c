int __fastcall sub_80F9090(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)MenuUpdateWindowText() == 1 )
    call_via_r1(v1, dword_300074C);
  return v3;
}
