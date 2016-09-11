int sub_804454C()
{
  signed int v0; // r8@1
  _WORD *v1; // r7@2
  unsigned __int8 *v2; // r5@3
  int v3; // r0@4
  int v4; // r6@7
  int v5; // r1@11
  unsigned __int8 v6; // r4@11
  __int16 v7; // r0@11
  int v8; // r2@11
  unsigned __int8 v9; // r4@11
  int v10; // r0@11
  unsigned int *v11; // r1@11
  char *v12; // r0@12
  int v13; // r1@16
  unsigned __int8 v14; // r4@16
  __int16 v15; // r0@16
  __int16 v16; // r0@17
  char *v17; // r0@20
  int v19; // [sp+0h] [bp-24h]@11
  int v20; // [sp+20h] [bp-4h]@22

  v0 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v1 = (_WORD *)33704554;
    do
    {
      v2 = (unsigned __int8 *)&byte_3004340[v0];
      if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v0]] != SpriteCallbackDummy )
        goto _080447D4;
      v3 = (unsigned __int8)battle_side_get_owner((unsigned __int8)v0);
      if ( v3 == 1 || !(battle_type_is_double(v3) << 24) && !(battle_side_get_owner((unsigned __int8)v0) << 24) )
        goto _080447D4;
      *(_BYTE *)(4 * v0 + 0x2017800) = *(_BYTE *)(4 * v0 + 0x2017800) & 0xEF | 16
                                                                             * ((*(_DWORD *)(4 * v0 + 0x2017800) << 27 >> 31) ^ 1);
      v4 = *(_DWORD *)(4 * v0 + 0x2017800) << 27 >> 31;
      if ( battle_side_get_owner((unsigned __int8)v0) << 24 )
      {
        if ( v4 != 1 )
        {
          draw_status_ailment_maybe(*v2);
          sub_8045A5C(*v2, (char *)&unk_30045C0 + 100 * *v1, 5);
          if ( v20239F8 & 0x80 )
            sub_8045A5C(*v2, (char *)&unk_30045C0 + 100 * *v1, 4);
          goto _080447BE;
        }
        if ( !(v20239F8 & 0x80) )
        {
          v13 = *(_WORD *)&gSprites[68 * *v2 + 56] & 0xFF;
          v19 = 0;
          CpuSet(&v19, (32 * *(_WORD *)&gSprites[68 * v13 + 4] & 0x7FFF) + 100728832, 83886144);
          v14 = *v2;
          v15 = GetMonData((int)&unk_30045C0 + 100 * *v1, 57, (int)&unk_30045C0);
          sub_8044210(v14, v15, 0);
          v9 = *v2;
          v10 = 25 * *v1;
          v11 = (unsigned int *)&unk_30045C0;
          goto _08044766;
        }
        sub_8044338(*v2, (int)&unk_30045C0 + 100 * *v1);
      }
      else
      {
        if ( !(battle_type_is_double(0) << 24) || v20239F8 & 0x80 )
          goto _080447D4;
        if ( v4 == 1 )
        {
          v5 = *(_WORD *)&gSprites[68 * *v2 + 56] & 0xFF;
          v19 = v20239F8 & 0x80;
          CpuSet(&v19, (32 * *(_WORD *)&gSprites[68 * v5 + 4] & 0x7FFF) + 100728832, 83886144);
          v6 = *v2;
          v7 = GetMonData((int)&dword_3004360[25 * *v1], 57, (int)dword_3004360);
          sub_8044210(v6, v7, 0);
          v9 = *v2;
          v10 = 25 * *v1;
          v11 = dword_3004360;
_08044766:
          v16 = GetMonData((int)&v11[v10], 58, v8);
          sub_8044210(v9, v16, 1u);
          goto _080447BE;
        }
        draw_status_ailment_maybe(*v2);
        sub_8045A5C(*v2, &dword_3004360[25 * *v1], 5);
        v12 = sub_8043CDC(117);
        CpuSet(v12, (32 * *(_WORD *)&gSprites[68 * *v2 + 4] & 0x7FFF) + 100730496, 67108872);
      }
_080447BE:
      v17 = &gSprites[68 * (unsigned __int8)byte_3004340[v0]];
      *((_WORD *)v17 + 30) ^= 1u;
_080447D4:
      ++v1;
      ++v0;
    }
    while ( v0 < v2024A68 );
  }
  return v20;
}
