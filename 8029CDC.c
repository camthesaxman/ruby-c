int atkC6_unhidepostattack()
{
  int *v0; // r1@7
  int v1; // r0@7
  signed int v2; // r2@7
  int v4; // [sp+0h] [bp-4h]@0

  if ( v2024BE6 == 91 )
  {
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = -129;
    goto _08029D4A;
  }
  if ( (signed int)v2024BE6 <= 91 )
  {
    if ( v2024BE6 != 19 )
      goto _08029D4E;
_08029D00:
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = -65;
_08029D4A:
    *v0 = v1 & v2;
    goto _08029D4E;
  }
  if ( v2024BE6 == 291 )
  {
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = -262145;
    goto _08029D4A;
  }
  if ( v2024BE6 == 340 )
    goto _08029D00;
_08029D4E:
  ++v2024C10;
  return v4;
}
