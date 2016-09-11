int __fastcall sub_80CF514(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v3; // r3@2
  int v4; // r6@2
  int *v5; // r1@4
  char *v6; // r0@5
  __int16 v7; // r1@5
  __int16 v8; // r0@7
  signed __int16 v9; // r0@8
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    LOWORD(v3) = dword_3004B20[10 * v1 + 2];
    v4 = 4 * v1;
  }
  else
  {
    v3 = 0xFFFF * LOWORD(dword_3004B20[10 * v1 + 2]) & 0xFFFF;
    v4 = 4 * v1;
  }
  obj_id_set_rotscale(v2, 0x100u, 256, v3);
  v5 = &dword_3004B20[2 * (v4 + v1)];
  if ( !*((_WORD *)v5 + 5) )
  {
    *((_WORD *)v5 + 4) += 176;
    v6 = &gSprites[68 * v2];
    v7 = *((_WORD *)v6 + 19) + 1;
_080CF5C2:
    *((_WORD *)v6 + 19) = v7;
    sub_8078F9C(v2);
    v5 = &dword_3004B20[2 * (v4 + v1)];
    if ( *((_WORD *)v5 + 4) == 3872 || !*((_WORD *)v5 + 4) )
    {
      if ( *((_WORD *)v5 + 5) == 2 )
      {
        sub_8078F40(v2);
        move_anim_task_del(v1);
        return v11;
      }
      v9 = *((_WORD *)v5 + 5) + 1;
_080CF606:
      *((_WORD *)v5 + 5) = v9;
      return v11;
    }
    return v11;
  }
  if ( *((_WORD *)v5 + 5) != 1 )
  {
    *((_WORD *)v5 + 4) -= 176;
    v6 = &gSprites[68 * v2];
    v7 = *((_WORD *)v6 + 19) - 1;
    goto _080CF5C2;
  }
  v8 = *((_WORD *)v5 + 7) + 1;
  *((_WORD *)v5 + 7) = v8;
  if ( v8 == 30 )
  {
    v9 = 2;
    goto _080CF606;
  }
  return v11;
}
