int __fastcall sub_8088554(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8088708() << 24 )
  {
    v4000042 = 240;
    v4000046 = 10360;
    dword_2020020[17 * *(_WORD *)(v1 + 38)] = (int)sub_8088890;
    ++*(_WORD *)(v1 + 8);
  }
  sub_80886F8(v1);
  return v3;
}
