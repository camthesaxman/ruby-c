int __fastcall sub_80876C8(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a1;
  v3 = a2;
  player_bitmagic();
  CameraObjectReset2();
  v202E85E = 1;
  *(_BYTE *)(v3 + 3) |= 4u;
  ++*(_WORD *)(v2 + 8);
  return 0;
}
