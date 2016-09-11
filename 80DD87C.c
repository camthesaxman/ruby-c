int __fastcall sub_80DD87C(int a1)
{
  int v1; // r4@1
  int v2; // r2@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    v2 = (unsigned __int8)FindTaskIdByFunc((int)sub_80DD604);
    if ( v2 != 255 )
      --HIWORD(dword_3004B20[10 * v2 + 7]);
    DestroySprite(v1);
  }
  return v4;
}
