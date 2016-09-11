int __fastcall sub_809E7F0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_809F5F8() << 24 )
  {
    v2018074 = 0;
    sub_80A0428(33652752, 33652857);
    dword_3004B20[10 * v1] = (int)sub_809E3FC;
    BgFrame_FillTileMap(v1);
  }
  return v3;
}
