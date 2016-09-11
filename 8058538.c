signed int __fastcall task_overworld_door_add_if_inactive(int a1, int a2, __int16 a3, __int16 a4)
{
  int v4; // r6@1
  int v5; // r5@1
  __int16 v6; // r7@1
  __int16 v7; // r8@1
  char *v8; // r1@2
  signed int result; // r0@2

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( (FuncIsActiveTask(task50_overworld_door) & 0xFF) == 1 )
  {
    result = -1;
  }
  else
  {
    result = (unsigned __int8)CreateTask(task50_overworld_door, 80);
    v8 = (char *)&unk_3004B28 + 40 * result;
    *((_WORD *)v8 + 6) = v6;
    *((_WORD *)v8 + 7) = v7;
    *((_WORD *)v8 + 1) = v5;
    *(_WORD *)v8 = HIWORD(v5);
    *((_WORD *)v8 + 3) = v4;
    *((_WORD *)v8 + 2) = HIWORD(v4);
    result = (char)result;
  }
  return result;
}
