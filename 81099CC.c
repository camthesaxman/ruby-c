int sub_81099CC()
{
  unsigned int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v20284C8 = 2;
  v20284F9 = 0;
  v0 = 0;
  do
  {
    StringCopy((_BYTE *)(11 * v0 + 33719501), (_BYTE *)gUnknown_083F62D8[v0]);
    *(_BYTE *)(v0 + 33719497) = gTraderDecorations[v0];
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  sub_810993C();
  return v2;
}
