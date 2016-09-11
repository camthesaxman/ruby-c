int sub_80BF3DC()
{
  unsigned __int8 v0; // r0@2
  int v1; // r0@2
  _BYTE *v2; // r0@2
  unsigned __int8 v3; // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  sub_80BF25C(3u);
  if ( !v202E8DC )
  {
    v0 = sub_810F87C(v202E8DC);
    v1 = GetMonData((int)&dword_3004360[25 * v0], 11, 0);
    v2 = StringCopy(&gStringVar1, &gSpeciesNames[11 * v1]);
    v3 = sub_810F87C(v2);
    GetMonData((int)&dword_3004360[25 * v3], 2, (int)&gStringVar2);
    StringGetEnd10((int)&gStringVar2);
    sub_80EB6FC(36 * byte_3005D38 + 33717896, 2);
  }
  return v5;
}
