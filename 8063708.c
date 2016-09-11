int __fastcall GetGroundEffectFlags_Reflection(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r2@1
  int v6; // [sp+0h] [bp-14h]@1
  int v7; // [sp+4h] [bp-10h]@1
  int v8; // [sp+10h] [bp-4h]@5

  v2 = a1;
  v3 = a2;
  v6 = 32;
  v7 = 16;
  v4 = FieldObjectCheckForReflectiveSurface(a1, 16) & 0xFF;
  if ( v4 )
  {
    if ( !(*(_BYTE *)(v2 + 2) & 2) )
    {
      *(_BYTE *)(v2 + 2) = *(_BYTE *)(v2 + 2) & 0xFD | 2;
      *v3 |= *(&v6 + v4 - 1);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 2) &= 0xFDu;
  }
  return v8;
}
