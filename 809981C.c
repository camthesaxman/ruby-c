int __fastcall sub_809981C(signed int a1, unsigned __int8 a2)
{
  int *v2; // r3@7
  int v3; // r0@7
  signed int v4; // r4@7
  int *v5; // r0@9
  int **v6; // r4@11
  int v7; // r0@11
  int v9; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 1 )
  {
    v2 = &gUnknown_083B6DB4;
    v3 = 4 * a2;
    v4 = 4176;
  }
  else
  {
    if ( a1 > 1 )
    {
      if ( a1 != 2 )
        return v9;
      v5 = &gUnknown_083B6DB4;
      v20010CC = 33558580;
      goto _0809988A;
    }
    if ( a1 )
      return v9;
    v2 = &gUnknown_083B6DB4;
    v3 = 4 * a2;
    v4 = 4152;
  }
  v20010CC = v3 + v4 + 0x2000000;
  v5 = v2;
_0809988A:
  v6 = (int **)(*v5 + 4300);
  v7 = **v6;
  if ( v7 )
  {
    InitSpriteAffineAnim(v7);
    *(_BYTE *)(**v6 + 1) = *(_BYTE *)(**v6 + 1) & 0xFC | 1;
    *(_DWORD *)(**v6 + 16) = &gUnknown_083B6F5C;
    StartSpriteAffineAnim(**v6, 0);
  }
  return v9;
}
