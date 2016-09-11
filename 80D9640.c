int __fastcall sub_80D9640(int a1)
{
  int v1; // r1@1
  int v2; // r0@4
  __int16 v3; // r0@8
  __int16 v4; // r0@9
  signed __int16 v5; // r0@10
  int v6; // r0@13
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( *(_WORD *)(a1 + 46) == 1 )
    {
      v3 = *(_WORD *)(a1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v3;
      if ( v3 > 1 )
      {
        *(_WORD *)(v1 + 48) = 0;
        v4 = *(_WORD *)(v1 + 52) + 1;
        *(_WORD *)(v1 + 52) = v4;
        if ( (v4 & 1) << 16 )
          v5 = 2;
        else
          v5 = -2;
        *(_WORD *)(v1 + 36) = v5;
      }
      v6 = *(_WORD *)(v1 + 50) - 1;
      *(_WORD *)(v1 + 50) = v6;
      if ( !(v6 << 16) )
        move_anim_8072740(v1);
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v2;
    if ( !(v2 << 16) )
    {
      if ( *(_WORD *)(v1 + 50) )
        ++*(_WORD *)(v1 + 46);
      else
        move_anim_8072740(v1);
    }
  }
  return v8;
}
