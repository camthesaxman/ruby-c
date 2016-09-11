int __fastcall sub_813EEB4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  SetVBlankCallback(0);
  v2000888 = 0;
  v2000000 = v1;
  SetMainCallback2((int)sub_813EEE4);
  return v3;
}
