int __fastcall sub_813BCF0(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@10
  int *v3; // r0@12
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( dword_3005ED0 == 76 )
    *(_WORD *)&gSprites[68 * LOWORD(dword_3004B20[10 * a1 + 2]) + 46] = 1;
  if ( dword_3005ED0 == 251 )
    *(_WORD *)&gSprites[68 * LOWORD(dword_3004B20[10 * a1 + 2]) + 46] = 2;
  if ( dword_3005ED0 == 368 )
    sub_813D584(48, 0, 1024, 5);
  if ( dword_3005ED0 == 384 )
    sub_813D584(200, 60, 1024, 9);
  if ( dword_3005ED0 == 560 )
  {
    v2 = CreateTask((int)sub_813CCE8, 0);
    sub_813D954(120, 80, v2);
  }
  if ( (unsigned int)dword_3005ED0 > 0x2E3 )
  {
    v3 = &dword_3004B20[10 * v1];
    *((_WORD *)v3 + 5) = 80;
    *((_WORD *)v3 + 6) = 0;
    *((_WORD *)v3 + 7) = 24;
    *((_WORD *)v3 + 8) = 0;
    *((_WORD *)v3 + 9) = 40;
    *((_WORD *)v3 + 10) = 0;
    *v3 = (int)task_intro_4;
  }
  return v5;
}
