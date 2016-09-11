int __fastcall sub_809E83C(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  audio_play(5u);
  sub_80A1B1C(19);
  sub_80A1B40(0);
  if ( v3 != 1 )
  {
    sub_80A0428(33652752, 33652857);
    goto _0809E8CA;
  }
  if ( v2018079 == v201807A )
  {
_0809E8CA:
    dword_3004B20[10 * v2] = (int)sub_809E3FC;
    BgFrame_FillTileMap(v2);
    return v5;
  }
  if ( v201800E )
    sub_809E6D8();
  else
    sub_809E5C4();
  v2018079 = v201807A;
  sub_809F678(33652752);
  v2018074 = 1;
  dword_3004B20[10 * v2] = (int)sub_809E7F0;
  return v5;
}
