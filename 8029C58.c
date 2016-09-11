int atkC5_hidepreattack()
{
  int *v0; // r1@7
  int v1; // r0@7
  signed int v2; // r2@7
  int v4; // [sp+0h] [bp-4h]@0

  if ( v2024BE6 == 91 )
  {
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = 128;
    goto _08029CC0;
  }
  if ( (signed int)v2024BE6 <= 91 )
  {
    if ( v2024BE6 != 19 )
      goto _08029CC4;
_08029C7C:
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = 64;
_08029CC0:
    *v0 = v1 | v2;
    goto _08029CC4;
  }
  if ( v2024BE6 == 291 )
  {
    v0 = (int *)(4 * v2024C07 + 33705112);
    v1 = *(_DWORD *)(4 * v2024C07 + 0x2024C98);
    v2 = 0x40000;
    goto _08029CC0;
  }
  if ( v2024BE6 == 340 )
    goto _08029C7C;
_08029CC4:
  ++v2024C10;
  return v4;
}
