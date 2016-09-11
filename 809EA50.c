int __fastcall sub_809EA50(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  audio_play(5u);
  v2018079 = 0;
  sub_80A1488(2, 0);
  sub_80A1654(2, 0);
  if ( !v201807B )
  {
    v201807F = 5;
    sub_80A0DD0(5);
  }
  sub_80A16CC(0);
  sub_80A029C(33652752);
  sub_80A1A30(9);
  dword_3004B20[10 * v1] = (int)sub_809E3FC;
  BgFrame_FillTileMap(v1);
  return v3;
}
