int __fastcall sub_812F76C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r3@1
  int v3; // r0@1
  signed __int16 v4; // r5@1
  __int16 v5; // r0@2
  __int16 v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  v4 = 0;
  *((_WORD *)v2 + 4) = v3 + 1;
  if ( ((v3 - 20) & 0xFFFFu) > 0x16 )
    goto LABEL_11;
  v5 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v5;
  if ( v5 <= 1 )
    goto _0812F7E0;
  *((_WORD *)v2 + 5) = 0;
  v6 = *((_WORD *)v2 + 6) + 1;
  *((_WORD *)v2 + 6) = v6;
  v4 = 1;
  if ( v6 & 1 )
LABEL_11:
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = v4;
  else
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = -1;
_0812F7E0:
  if ( !(sub_807992C((int)&dword_3004B20[10 * v1]) << 24) )
    move_anim_task_del(v1);
  return v8;
}
