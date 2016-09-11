int __fastcall BgFrame_FillTileMap(int a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  dword_3005CF0 = *v1;
  *v1 = (int)sub_80A20A8;
  call_via_r2((unsigned __int8)a1, v1, sub_80A20A8);
  return v3;
}
