int __fastcall sub_80A8488(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  char *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = &gSprites[68 * *((_BYTE *)v2 + 8)];
  *((_WORD *)v3 + 18) = sine(*((_WORD *)v2 + 9), *((_WORD *)v2 + 5));
  v4 = -cosine(*((_WORD *)v2 + 9), *((_WORD *)v2 + 6));
  *((_WORD *)v3 + 19) = v4;
  *((_WORD *)v3 + 19) = v4 + *((_WORD *)v2 + 6);
  v5 = (*((_WORD *)v2 + 8) + *((_WORD *)v2 + 9)) & 0xFF;
  *((_WORD *)v2 + 9) = v5;
  if ( !v5 )
    --*((_WORD *)v2 + 7);
  if ( !*((_WORD *)v2 + 7) )
  {
    *((_WORD *)v3 + 18) = 0;
    *((_WORD *)v3 + 19) = 0;
    move_anim_task_del(v1);
  }
  return v7;
}
