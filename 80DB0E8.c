int __fastcall sub_80DB0E8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r7@1
  int v3; // r4@2
  unsigned __int8 v4; // r0@2
  __int16 v5; // r0@3
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !(*((_WORD *)v2 + 4) & 0x1F) )
  {
    ++v202F7B2;
    word_3004B00[0] = sine(*((_WORD *)v2 + 4), -13);
    word_3004B02 = cosine(*((_WORD *)v2 + 4), -13);
    word_3004B04 = 1;
    word_3004B06 = 3;
    v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    v4 = sub_8077ABC(v202F7C9, 3u);
    CreateSpriteAndAnimate((int)&gBattleAnimSpriteTemplate_83DB538, v3, v4, 3);
  }
  v5 = *((_WORD *)v2 + 4) + 8;
  *((_WORD *)v2 + 4) = v5;
  if ( v5 > 255 )
    move_anim_task_del(v1);
  return v7;
}
