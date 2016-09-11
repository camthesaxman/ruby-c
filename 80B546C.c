signed int __fastcall yes_no_box(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r5@1
  __int16 v3; // r4@1
  int *v4; // r1@2
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  if ( (unsigned __int8)FuncIsActiveTask((int)task_yes_no_maybe) == 1 )
  {
    result = 0;
  }
  else
  {
    v202E8DC = 255;
    DisplayYesNoMenu(v2, v3, 1);
    v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)task_yes_no_maybe, 80)];
    *((_WORD *)v4 + 4) = v2;
    *((_WORD *)v4 + 5) = v3;
    result = 1;
  }
  return result;
}
