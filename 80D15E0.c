int __fastcall sub_80D15E0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  char *v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !(unsigned __int8)sub_807992C((int)v2) )
  {
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 38] = 0;
    v3 = &gSprites[68 * *((_WORD *)v2 + 4) + 62];
    *v3 |= 4u;
    move_anim_task_del(v1);
  }
  return v5;
}
