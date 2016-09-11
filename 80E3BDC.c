int __fastcall sub_80E3BDC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r4@1
  char *v3; // r2@4
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( v2 != v202F7C8 && b_side_obj__get_some_boolean((unsigned __int8)v2) << 24 )
    {
      v3 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
      *v3 = *v3 & 0xFB | 4 * (word_3004B00[0] & 1);
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 3 );
  move_anim_task_del(v1);
  return v5;
}
