int oei_task_add()
{
  GetXYCoordsOneStepInFrontOfPlayer((_WORD *)0x203923C, (_WORD *)0x203923E);
  return (unsigned __int8)CreateTask((int)task08_080C9820, 8);
}
