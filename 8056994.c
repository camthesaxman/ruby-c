int __fastcall CameraMove(int a1, int a2)
{
  __int16 v2; // r10@1
  signed int v3; // r7@1
  int v4; // r6@3
  int v5; // r8@3
  int v6; // r4@3
  int v8; // [sp+0h] [bp-24h]@1

  v2 = a1;
  v8 = a2;
  v202E844 &= 0xFEu;
  v3 = GetPostCameraMoveMapBorderId(a1, a2);
  if ( (unsigned int)(v3 + 1) > 1 )
  {
    save_serialize_map();
    v4 = v2025734;
    v5 = v2025736;
    v6 = sub_8056A64();
    sub_8056918(v6, v3, v2, v8);
    sub_80538F0(*(_BYTE *)(v6 + 8), *(_BYTE *)(v6 + 9));
    v202E844 |= 1u;
    v202E848 = v4 - v2025734;
    v202E84C = v5 - v2025736;
    v2025734 += v2;
    v2025736 += v8;
    sub_80566F0(v3);
  }
  else
  {
    v2025734 += v2;
    v2025736 += v8;
  }
  return v202E844 & 1;
}
