int __fastcall sub_8086AA0(int a1)
{
  int v1; // r4@1

  v1 = a1;
  player_bitmagic();
  CameraObjectReset2();
  sub_80B4824(*(_BYTE *)(v1 + 10));
  ++*(_WORD *)(v1 + 8);
  return 0;
}
