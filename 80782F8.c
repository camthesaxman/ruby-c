int __fastcall sub_80782F8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078314();
  *(_DWORD *)(v1 + 28) = sub_8078364;
  call_via_r1(v1, sub_8078364);
  return v3;
}
