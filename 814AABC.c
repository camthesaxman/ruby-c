int __fastcall sub_814AABC(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( v203A3D0 != 64 )
    *(_DWORD *)&gSprites[68 * v203A3D0 + 28] = a1;
  if ( v203A3D1 != 64 )
    *(_DWORD *)&gSprites[68 * v203A3D1 + 28] = a1;
  return v2;
}
